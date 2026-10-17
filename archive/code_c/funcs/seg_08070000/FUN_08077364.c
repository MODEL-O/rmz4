// undefined FUN_08077364(void)
// entry 0x8077364


undefined4 FUN_08077364(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc6) == '\0') {
    FUN_08079188(param_1);
  }
  else {
    FUN_080790a8(param_1);
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08077394));
  return in_lr;
}


