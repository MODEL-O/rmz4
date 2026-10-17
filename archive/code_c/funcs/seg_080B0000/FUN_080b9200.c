// undefined FUN_080b9200(void)
// entry 0x80b9200


undefined4 FUN_080b9200(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_78 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int aiStack_5c [15];
  int local_20;
  
  local_78[0] = *DAT_080b9318;
  local_78[1] = DAT_080b9318[1];
  local_78[2] = DAT_080b9318[2];
  local_78[3] = DAT_080b9318[3];
  uStack_68 = DAT_080b9318[4];
  uStack_64 = DAT_080b9318[5];
  local_60 = DAT_080b9318[6];
  FUN_08129258(aiStack_5c,DAT_080b931c,0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b9320);
    FUN_0801cf00(param_1,DAT_080b9324);
    *(undefined4 *)(param_1 + 100) = 0x46;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar5 = *(undefined4 *)(param_1 + 100);
  iVar2 = FUN_08128fb8(uVar5,10);
  uVar6 = 7U - iVar2 & 0xff;
  if (6 < uVar6) {
    uVar6 = 6;
  }
  iVar2 = FUN_08129050(uVar5,10);
  if (iVar2 == 0) {
    FUN_0801cf00(param_1,*(undefined2 *)(local_78 + uVar6));
  }
  if ((*(uint *)(param_1 + 100) & 3) == 0) {
    FUN_08002b10(0x13c);
    iVar2 = FUN_08128fb8(*(int *)(param_1 + 100) * 0x3c,0x46);
    uVar3 = FUN_08128fb8((iVar2 + 0x96) * 0x100,0x168);
    iVar2 = (bVar1 >> 4 & 1) * 2;
    aiStack_5c[0xe] = *(int *)(param_1 + 0x54) + aiStack_5c[uVar6 * 2] * (iVar2 + -1);
    local_20 = *(int *)(param_1 + 0x58) + aiStack_5c[uVar6 * 2 + 1];
    FUN_080cfcf8(uVar4,aiStack_5c + 0xe,(uVar3 & 0xff) + iVar2 * (0x140 - (uVar3 & 0xff)) & 0xff,0);
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar2;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 5;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


