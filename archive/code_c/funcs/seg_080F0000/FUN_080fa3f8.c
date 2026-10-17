// undefined FUN_080fa3f8(void)
// entry 0x80fa3f8


undefined4 FUN_080fa3f8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080fa444));
    *(undefined1 *)(param_1 + 0xbe) = 0;
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fa424);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080fa448(param_1);
  }
  return in_lr;
}


