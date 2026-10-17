// undefined FUN_08038640(void)
// entry 0x8038640


undefined8 FUN_08038640(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0x180;
  if (((*(uint *)(param_1 + 600) & 0x80) == 0) &&
     ((cVar2 = FUN_08038b0c(param_1), cVar2 != '\0' || (*(char *)(param_1 + 0xc6) == '\x19')))) {
    iVar5 = 0xc0;
  }
  uVar1 = *(ushort *)((uint)*(byte *)(param_1 + 0x174) * 8 + DAT_080386a8 + 6);
  iVar4 = *(int *)(param_1 + 0x58);
  if ((*(ushort *)(DAT_080386ac + 0x1d0) & 0x7f) == 2) {
    iVar3 = FUN_08007b84(param_1 + 0x54);
  }
  else {
    iVar3 = *(int *)(DAT_080386ac + DAT_080386c4);
  }
  if (iVar3 < iVar4 - ((int)((uint)uVar1 << 0x10) >> 0x11)) {
    if (iVar5 == 0xc0) {
      iVar5 = 0x60;
    }
    else {
      iVar5 = 0xc0;
    }
  }
  return CONCAT44(in_lr,iVar5);
}


