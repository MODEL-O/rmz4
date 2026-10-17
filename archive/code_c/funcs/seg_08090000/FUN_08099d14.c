// undefined FUN_08099d14(void)
// entry 0x8099d14


undefined4 FUN_08099d14(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  FUN_0801cff0();
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + DAT_08099d44;
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(&local_1c,DAT_08099d48,0,bVar2);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(&local_1c,DAT_08099d78,0,bVar2);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(&local_1c,DAT_08099da0,0,bVar2);
  FUN_080d0c88(1,&local_1c);
  FUN_08002b10(0x2a);
  FUN_0802ab88(3,0x2c,param_1 + 0x54);
  if (*(ushort *)(DAT_08099dfc + 0xc) <= DAT_08099e00) {
    *(ushort *)(DAT_08099dfc + 0xc) = *(ushort *)(DAT_08099dfc + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08099e04);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


