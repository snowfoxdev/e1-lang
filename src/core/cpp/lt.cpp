shared_ptr<Box>  core_lt(shared_ptr<Box> a, shared_ptr<Box> b) {
  return make_shared<Box>(a->double_leaf < b->double_leaf, true);
};

auto core_lt(shared_ptr<Box> a) {
  return [a] (shared_ptr<Box> b)->shared_ptr<Box>  {return core_lt(a, b);};
}
