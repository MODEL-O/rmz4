// undefined FUN_080c15d8(void)
// entry 0x80c15d8


undefined4 FUN_080c15d8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_20 [3];
  
  puVar6 = &stack0xffffffec;
  local_20[0] = *DAT_080c169c;
  local_20[1] = DAT_080c169c[1];
  local_20[2] = DAT_080c169c[2];
  uVar7 = (uint)*(byte *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(uVar7 * 4 + DAT_080c16a0));
    iVar5 = DAT_080c16a8;
    uVar3 = (uint)*(byte *)(uVar7 + DAT_080c16a4) +
            (bVar1 >> 4 & 1) * 2 * (0x140 - (uint)*(byte *)(uVar7 + DAT_080c16a4)) & 0xff;
    puVar6 = (undefined1 *)local_20[uVar7];
    iVar4 = (int)puVar6 * (int)*(short *)((uVar3 + 0x40 & 0xff) * 2 + DAT_080c16a8);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    iVar5 = (int)puVar6 * (int)*(short *)(uVar3 * 2 + iVar5);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar5 >> 8;
    *(undefined1 *)(param_1 + 0x13) = 0x14;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1,puVar6);
  FUN_08005784(param_1 + 0x74,DAT_080c16ac);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


