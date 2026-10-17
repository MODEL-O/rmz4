// undefined FUN_08103c10(void)
// entry 0x8103c10


undefined4 FUN_08103c10(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08103c70;
  uVar2 = 0;
  do {
    FUN_080e3db4(param_1 + 0x54,uVar2 * 0x1c + DAT_08103c74,0,0);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 7);
  FUN_08019764();
  FUN_0801fe64(4,param_1 + 0x54);
  FUN_08002b10(0x182);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08103c78);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


