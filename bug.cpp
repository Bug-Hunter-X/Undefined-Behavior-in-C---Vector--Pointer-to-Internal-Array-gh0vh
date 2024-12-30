std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

int* ptr = &vec[0]; // This is UB

for (int i = 0; i < 10; ++i) {
  std::cout << ptr[i] << " ";
}

vec.push_back(10); // This is UB