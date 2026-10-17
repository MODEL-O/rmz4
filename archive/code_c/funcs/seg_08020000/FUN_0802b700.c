// undefined FUN_0802b700(void)
// entry 0x802b700


undefined8 FUN_0802b700(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x250);
  iVar2 = -((int)-(uVar1 & 0x40) >> 0x1f);
  if ((uVar1 & 0x80) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((uVar1 & 0x20) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((uVar1 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(ushort *)(param_1 + 0x260) & uVar1) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(ushort *)(param_1 + 0x25c) & uVar1) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(ushort *)(param_1 + DAT_0802b79c) & uVar1) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(char *)(param_1 + 0xdf) == '\x01') && ((*(ushort *)(param_1 + DAT_0802b7a0) & uVar1) != 0))
  {
    iVar2 = iVar2 + 1;
  }
  return CONCAT44(in_lr,iVar2);
}


