// undefined FUN_081258dc(void)
// entry 0x81258dc


undefined8 FUN_081258dc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  iVar4 = param_1 + DAT_08125914;
  if (((*(uint *)(iVar4 + 0x24) & 3) == 1) && (*(int *)(iVar4 + 0x14) != 0)) {
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + -1;
  }
  piVar5 = (int *)(param_1 + DAT_08125918);
  iVar4 = *(int *)(*(int *)(param_1 + DAT_08125918 + 8) + 0x54);
  *piVar5 = iVar4;
  if (DAT_0812591c < iVar4) {
    iVar1 = 0x7f800;
    if (iVar4 < 0x7f801) goto LAB_0812592a;
  }
  else {
    iVar1 = DAT_0812591c + 1;
  }
  *piVar5 = iVar1;
LAB_0812592a:
  iVar4 = param_1 + DAT_08125980;
  iVar1 = *(int *)(iVar4 + 0x14);
  if ((iVar1 == 0) || ((*(uint *)(iVar4 + 0x24) & 2) != 0)) {
    *(char *)(iVar4 + 0x18) = *(char *)(iVar4 + 0x18) + '\x01';
    *(undefined1 *)(iVar4 + 0x19) = 0;
    iVar2 = FUN_08128fb8(*(undefined4 *)(iVar4 + 8),0x3c);
    iVar3 = FUN_08129050(0xe10 - iVar1,0x3c);
    *(int *)(iVar4 + 8) = iVar2 * 0x3c + iVar3;
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 6) = 0;
      *(undefined4 *)(iVar4 + 8) = 0xe10;
    }
  }
  return CONCAT44(in_lr,1);
}


