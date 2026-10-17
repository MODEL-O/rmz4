// undefined FUN_080c1708(void)
// entry 0x80c1708


undefined4 FUN_080c1708(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_38[0] = *DAT_080c1804;
  local_38[1] = DAT_080c1804[1];
  local_38[2] = DAT_080c1804[2];
  local_38[3] = DAT_080c1804[3];
  uStack_28 = DAT_080c1804[4];
  uStack_24 = DAT_080c1804[5];
  local_20 = DAT_080c1804[6];
  uStack_1c = DAT_080c1804[7];
  bVar2 = *(byte *)(param_1 + 10) >> 4;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0x13) = bVar2 & 1;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar7 = uVar7 + 1 & 1;
    *(char *)(param_1 + 0x13) = (char)uVar7;
    *(uint *)(param_1 + 100) = *(int *)(param_1 + 0x54) + (uVar7 * 2 + -1) * 0x2000;
    *(undefined1 *)(param_1 + 0x12) = 0x18;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  bVar1 = *(byte *)(param_1 + 0x12);
  uVar4 = FUN_08128fb8((uint)bVar1 << 6,0x18);
  iVar3 = DAT_080c1808;
  iVar5 = (uint)bVar1 * (int)*(short *)((uVar4 & 0xff) * 2 + DAT_080c1808);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  uVar6 = iVar5 >> 8 & 0xff;
  uVar4 = FUN_08128fb8(uVar6,6);
  FUN_0801cf00(param_1,*(undefined2 *)
                        (local_38 + (3 - (uVar4 & 0xff) & 0xff) * 2 + (uVar7 + (bVar2 & 1) & 1)));
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080c180c);
  iVar5 = FUN_08128fb8(uVar6 << 6,0x18);
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 100) +
       (uVar7 * 2 + -1) * *(short *)((0x80U - iVar5 & 0xff) * 2 + iVar3) * -0x20;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  return in_lr;
}


