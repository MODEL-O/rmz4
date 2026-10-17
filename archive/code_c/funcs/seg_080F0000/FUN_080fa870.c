// undefined FUN_080fa870(void)
// entry 0x80fa870


undefined4 FUN_080fa870(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  FUN_0801cff0();
  iVar1 = DAT_080fa8ec;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + DAT_080fa8e8;
  FUN_080d4c8c(&local_18,DAT_080fa8ec,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(&local_18,iVar1 + -0x1c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d0c88(1,&local_18);
  FUN_08002b10(0x2a);
  FUN_0802ab88(0,0xff,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fa8f0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


