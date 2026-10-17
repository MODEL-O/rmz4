// undefined FUN_080e4498(void)
// entry 0x80e4498


undefined4 FUN_080e4498(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  uVar5 = *DAT_080e44d4 * DAT_080e44d8 + DAT_080e44dc;
  *DAT_080e44d4 = uVar5 & 0x7fffffff;
  cVar4 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,3);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar7 = DAT_080e44e0;
  if ((cVar4 == '\0') || (uVar7 = DAT_080e44f4, cVar4 == '\x01')) {
    FUN_0801cf00(param_1,uVar7);
  }
  else {
    FUN_0801cf00(param_1,DAT_080e4564);
  }
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x17;
  iVar3 = DAT_080e4570;
  iVar2 = DAT_080e456c;
  puVar1 = DAT_080e4568;
  uVar5 = DAT_080e456c * *DAT_080e4568 + DAT_080e4570;
  *(uint *)(param_1 + 0x5c) = 0x40 - ((uVar5 & 0x1ffffff) >> 0x10);
  uVar5 = iVar2 * (uVar5 & 0x7fffffff) + iVar3;
  *puVar1 = uVar5 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (((uVar5 & 0x7fffffff) >> 0x10 & 7) + 8) * -0x40;
  *(undefined1 *)(param_1 + 0x12) = 0x40;
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e4574);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080e4284(param_1);
  return in_lr;
}


