// undefined FUN_080805cc(void)
// entry 0x80805cc


undefined4 FUN_080805cc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  FUN_0801cff0();
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + DAT_0808063c;
  FUN_080d0c88(1,&local_14);
  iVar2 = param_1 + 0x54;
  FUN_080d6834(param_1,iVar2);
  FUN_08002b10(0x2a);
  FUN_0802aaec(3,iVar2);
  if (*(ushort *)(DAT_08080640 + 0xc) <= DAT_08080644) {
    *(ushort *)(DAT_08080640 + 0xc) = *(ushort *)(DAT_08080640 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,iVar2);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08080648);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


