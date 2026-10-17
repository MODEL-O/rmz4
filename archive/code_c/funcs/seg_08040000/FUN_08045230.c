// undefined FUN_08045230(void)
// entry 0x8045230


undefined4 FUN_08045230(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar5;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 <= DAT_080452c8) {
      uVar7 = *(undefined4 *)(param_1 + 0x2c);
      FUN_0801cf00(param_1,DAT_080452cc);
      FUN_0801cff0(param_1);
      iVar5 = param_1 + 0x54;
      FUN_08044fb8(uVar7,iVar5,0,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_08044fb8(uVar7,iVar5,1,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_08044fb8(uVar7,iVar5,2,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_08044fb8(uVar7,iVar5,3,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_08002b10(0x36);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = -iVar6;
    }
    if (iVar5 <= DAT_08045364) {
      *(int *)(param_1 + 0x5c) = iVar6 + *(int *)(param_1 + 100) * -4;
    }
  }
  cVar1 = FUN_0803a99c(param_1,3);
  if (*(char *)(iVar3 + 0xfa) == '\x02') {
    cVar1 = '\x01';
  }
  if (((cVar1 != '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) ||
     ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    if (cVar1 != -1) {
      FUN_080d0c88(1,param_1 + 0x54);
      FUN_08002b10(0x35);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08045368);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_08045218(param_1);
  }
  return in_lr;
}


