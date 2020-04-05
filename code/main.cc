#include <iostream>
#include <cassert>
#include "leveldb/db.h"
#include "leveldb/write_batch.h"

using namespace std;
using namespace leveldb;

int main()
{
  DB* db = nullptr;
  Options options;
  options.create_if_missing = true;
  leveldb::Status status = leveldb::DB::Open(options, "./testdb", &db);

  std::string value = "";
  leveldb::Status s = db->Put(leveldb::WriteOptions(), "test", "walterzhao");
  
  if (s.ok()) {
    s = db->Get(leveldb::ReadOptions(), "test", &value);
  }
  
  cout << "value:" << value << endl; 

  return 0;
}
