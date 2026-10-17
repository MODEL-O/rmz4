// undefined FUN_08099048(void)
// entry 0x8099048


undefined4 FUN_08099048(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x6800);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar5 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  if (cVar5 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    iVar4 = DAT_080990f0;
    iVar3 = DAT_080990ec;
    puVar2 = DAT_080990e8;
    iVar1 = DAT_080990e4;
    uVar6 = *DAT_080990e8 * DAT_080990ec + DAT_080990f0;
    uVar8 = uVar6 & 0x7fffffff;
    *DAT_080990e8 = uVar8;
    iVar7 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,6);
    *(undefined1 *)(param_1 + 0xbe) = *(undefined1 *)(iVar7 + iVar1);
    uVar6 = uVar8 * iVar3 + iVar4;
    *puVar2 = uVar6 & 0x7fffffff;
    *(byte *)(param_1 + 0xbf) = (byte)(uVar6 >> 0x10) & 1;
  }
  return in_lr;
}


