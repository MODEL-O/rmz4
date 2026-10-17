// undefined FUN_08055188(void)
// entry 0x8055188


undefined8 FUN_08055188(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  while ((*(byte *)(param_1 + 0xb6) & 8) == 0) {
    iVar3 = *(int *)(param_1 + 0x68);
    iVar1 = *(int *)(param_1 + 0x60) + iVar3;
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar3 < 0) {
      iVar4 = DAT_080551b0;
      if (iVar1 < DAT_080551b0) {
LAB_080551bc:
        *(int *)(param_1 + 0x60) = iVar4;
      }
    }
    else {
      iVar4 = 0x300;
      if (0x300 < iVar1) goto LAB_080551bc;
    }
    iVar4 = *(int *)(param_1 + 0x60);
    iVar1 = FUN_08128fb8(iVar4,-iVar3);
    iVar1 = (iVar4 * 2 + -iVar3 * (-iVar1 + 1)) * -iVar1 >> 1;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if ((uint)(iVar1 * 2) < (uint)((*(int *)(param_1 + 0x58) - param_2) + iVar1)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      goto LAB_08055244;
    }
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 8;
  }
  iVar1 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar1;
  iVar1 = *(int *)(param_1 + 0x58) + iVar1;
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x68) < 0) {
    if ((param_2 != 0) && (iVar1 <= param_2)) {
LAB_08055228:
      *(int *)(param_1 + 0x58) = param_2;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      goto LAB_08055246;
    }
    if (0 < *(int *)(param_1 + 0x60)) {
LAB_08055236:
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    if ((param_2 != 0) && (param_2 <= iVar1)) goto LAB_08055228;
    if (*(int *)(param_1 + 0x60) < 0) goto LAB_08055236;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar2 = 0;
  }
  else {
LAB_08055244:
    uVar2 = 1;
  }
LAB_08055246:
  return CONCAT44(in_lr,uVar2);
}


