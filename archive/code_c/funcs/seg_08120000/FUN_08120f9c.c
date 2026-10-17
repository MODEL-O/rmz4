// undefined FUN_08120f9c(void)
// entry 0x8120f9c


undefined4 FUN_08120f9c(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    iVar3 = DAT_081210e0;
    uVar7 = 0;
    iVar4 = DAT_081210d0 + param_1;
    iVar6 = DAT_081210d4 + param_1;
    iVar9 = param_1 + DAT_081210d8;
    iVar8 = param_1 + DAT_081210dc;
    do {
      puVar5 = (undefined4 *)(uVar7 * 0xc + DAT_081210e4);
      *(undefined1 *)(iVar4 + uVar7) = *(undefined1 *)((int)puVar5 + 10);
      *(undefined4 *)(param_1 + 0xde0 + uVar7 * 4) = *puVar5;
      *(undefined4 *)(uVar7 * 4 + iVar6) = puVar5[1];
      *(undefined1 *)(iVar9 + uVar7) = *(undefined1 *)(puVar5 + 2);
      *(undefined1 *)(iVar8 + uVar7) = *(undefined1 *)((int)puVar5 + 9);
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 5);
    uVar1 = (undefined1)*(undefined2 *)(param_1 + 4);
    *(undefined1 *)(DAT_081210e8 + iVar3) = uVar1;
    *(undefined1 *)(DAT_081210ec + iVar3) = uVar1;
    *(undefined1 *)(iVar3 + 0x400) = uVar1;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  else if (*(char *)(param_1 + 2) != '\x01') {
    return in_lr;
  }
  bVar2 = 0;
  do {
    FUN_08122964(param_1 + DAT_081210f0,bVar2,bVar2);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  FUN_0810d85c((uint)*(ushort *)(DAT_081210f4 + 0x690) + DAT_081210f8,1,0x12);
  FUN_081228c8(param_1);
  FUN_080025d8(0x33);
  FUN_080025d8(0x79);
  if (*(short *)(param_1 + 4) < 0x20) {
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  }
  iVar3 = FUN_08002bb4(2);
  if (((iVar3 == 0) &&
      (iVar4 = FUN_08002ad0(*(undefined2 *)(param_1 + DAT_081210f0 + 4)), iVar3 = DAT_081210e0,
      iVar4 == 0)) && (0x1f < *(short *)(param_1 + 4))) {
    *(undefined1 *)(DAT_081210e0 + DAT_081210e8) = 0x20;
    *(undefined1 *)(iVar3 + DAT_081210ec) = 0x20;
    *(undefined1 *)(iVar3 + 0x400) = 0x20;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 1) = 2;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_08121134(param_1);
  }
  else {
    iVar3 = DAT_08121128;
    uVar1 = (undefined1)*(undefined2 *)(param_1 + 4);
    *(undefined1 *)(DAT_08121128 + DAT_0812112c) = uVar1;
    *(undefined1 *)(iVar3 + DAT_08121130) = uVar1;
    *(undefined1 *)(iVar3 + 0x400) = uVar1;
  }
  return in_lr;
}


