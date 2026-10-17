// undefined FUN_08094f00(void)
// entry 0x8094f00


undefined4 FUN_08094f00(int param_1)

{
  undefined4 in_lr;
  undefined4 local_c;
  int local_8;
  undefined4 uStack_4;
  
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(int *)(param_1 + 0x58) + DAT_08094f24;
  uStack_4 = in_lr;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    FUN_0802ab88(1,0xff,&local_c);
  }
  else {
    FUN_0802ab88(1,0x18,&local_c);
  }
  return uStack_4;
}


