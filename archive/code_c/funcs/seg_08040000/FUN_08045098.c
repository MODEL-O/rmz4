// undefined FUN_08045098(void)
// entry 0x8045098


undefined4 FUN_08045098(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804510c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801cf00(param_1,DAT_08045110);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_08045114,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_08045124;
      uVar4 = 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      uVar4 = 0xfffffff8;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    goto LAB_080451e0;
  }
  FUN_0801cf00(param_1,DAT_08045164);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08045168,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar2 = DAT_08045184;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x5c) = DAT_08045184;
    *(int *)(param_1 + 100) = iVar2 + 0xf0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0x10;
  }
  iVar2 = DAT_0804519c;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080451b0;
    *(undefined4 *)(param_1 + 0x60) = DAT_080451b4;
    uVar4 = 0x10;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_0804519c;
      *(int *)(param_1 + 0x60) = iVar2;
      uVar4 = 0x30;
    }
    else {
LAB_080451ce:
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x300;
      *(undefined4 *)(param_1 + 0x60) = 0x300;
      uVar4 = 0xffffffd0;
    }
  }
  else {
    if (bVar1 != 2) goto LAB_080451ce;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x300;
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    uVar4 = 0xfffffff0;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar4;
LAB_080451e0:
  *(undefined1 *)(param_1 + 0x12) = 0x80;
  FUN_0801cff0(param_1);
  *(undefined4 *)(param_1 + 0x98) = DAT_080451fc;
  FUN_08045200(param_1);
  return in_lr;
}


