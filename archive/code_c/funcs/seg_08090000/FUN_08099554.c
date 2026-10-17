// undefined FUN_08099554(void)
// entry 0x8099554


undefined4 FUN_08099554(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(undefined4 *)(param_1 + 0x58);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(&local_18,DAT_0809957c,0,bVar2);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(&local_18,DAT_080995a8,0,bVar2);
  FUN_080d0c88(1,&local_18);
  FUN_08002b10(0x2a);
  FUN_0802ab88(3,0x15,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (*(ushort *)(DAT_0809960c + 0xc) <= DAT_08099610) {
    *(ushort *)(DAT_0809960c + 0xc) = *(ushort *)(DAT_0809960c + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08099614);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


