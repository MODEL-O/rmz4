// undefined FUN_080c0f50(void)
// entry 0x80c0f50


undefined4 FUN_080c0f50(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  int local_1c;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c0f90);
    FUN_0801cf00(param_1,0x3a00);
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_1c = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x12) == '\0') {
    sVar2 = FUN_08007c7c(iVar5,local_1c);
    if (sVar2 != 0) goto LAB_080c1000;
    uVar1 = 1;
  }
  else {
    sVar2 = FUN_08007c7c(iVar5);
    if (sVar2 == 0) {
      sVar2 = FUN_08007c7c(iVar5,local_1c);
      if (sVar2 != 0) {
        local_1c = FUN_08008534(iVar5,local_1c);
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      goto LAB_080c1000;
    }
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
LAB_080c1000:
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) = local_1c;
  iVar5 = FUN_08059be8(uVar3);
  if ((((iVar5 + DAT_080c106c <= *(int *)(param_1 + 0x54)) &&
       (iVar5 = FUN_08059bf4(uVar3), *(int *)(param_1 + 0x54) <= iVar5 + 0x3000)) &&
      (iVar5 = FUN_08059c00(uVar3), iVar5 + DAT_080c106c <= *(int *)(param_1 + 0x58))) &&
     (iVar5 = FUN_08059c0c(uVar3), *(int *)(param_1 + 0x58) <= iVar5 + 0x3000)) {
    return in_lr;
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c1070);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  FUN_080c1370(param_1);
  return in_lr;
}


