// undefined FUN_080a1718(void)
// entry 0x80a1718


undefined4 FUN_080a1718(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0dc4(0,&local_18,0x200,*(undefined1 *)(param_1 + 0xbb));
    FUN_080e1050(param_1 + 0x54,*(undefined1 *)(param_1 + 0x10),bVar1 >> 4 & 1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080a1824);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    uVar4 = *DAT_080a1828 * DAT_080a182c + DAT_080a1830;
    *DAT_080a1828 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar4 >> 0x10) & 3) + 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') || (sVar3 = FUN_08007c7c(local_18), sVar3 != 0)) {
    FUN_08002b10(0x2a);
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0c88(1,&local_18);
    FUN_080a1c7c(param_1);
    FUN_0802ab88(4,5,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(ushort *)(DAT_080a1834 + 0xc) <= DAT_080a1838) {
      *(ushort *)(DAT_080a1834 + 0xc) = *(ushort *)(DAT_080a1834 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = local_18;
    *(int *)(param_1 + 0x58) = local_14;
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  return in_lr;
}


