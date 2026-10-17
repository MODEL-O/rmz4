// undefined FUN_08099330(void)
// entry 0x8099330


undefined4 FUN_08099330(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(&local_1c,DAT_08099358,0,bVar2);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(&local_1c,DAT_08099388,0,bVar2);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  FUN_080d4c8c(&local_1c,DAT_080993b0,0,bVar2);
  FUN_080d0c88(1,&local_1c);
  FUN_08002b10(0x2a);
  FUN_0802ab88(3,0x15,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (*(ushort *)(DAT_08099414 + 0xc) <= DAT_08099418) {
    *(ushort *)(DAT_08099414 + 0xc) = *(ushort *)(DAT_08099414 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809941c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


