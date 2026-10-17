// undefined FUN_0800f4a8(void)
// entry 0x800f4a8


void FUN_0800f4a8(int param_1)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  iVar1 = DAT_0800f5b0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar7 = (ushort *)(uVar2 * 2 + DAT_0800f5b0);
    uVar4 = *(uint *)(param_1 + 100) | DAT_0800f5b4;
    *puVar7 = (ushort)uVar4;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x200;
    FUN_08128be0(*(int *)DAT_0800f5b8 + DAT_0800f5bc,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0(*(int *)DAT_0800f5c0 + DAT_0800f5c4,(*puVar7 & 0x1f00) * 8 + DAT_0800f5c8,0x200);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined1 *)(DAT_0800f5cc + DAT_0800f5d0) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  psVar3 = (short *)(param_1 + 0x68);
  if ((*psVar3 == 0) && (*(int *)(*(int *)DAT_0800f5d4 + 0x58) <= DAT_0800f5d8)) {
    FUN_08002b10(0x79);
    *psVar3 = 0x79;
  }
  if ((*psVar3 == 0x79) && (DAT_0800f5d8 < *(int *)(*(int *)DAT_0800f5d4 + 0x58))) {
    FUN_08002b5c(0x79);
    *psVar3 = 0;
  }
  iVar1 = DAT_0800f5cc;
  if (*(ushort *)(DAT_0800f5cc + DAT_0800f5dc) >> 8 != 4) {
    return;
  }
  if ((*(ushort *)(DAT_0800f5cc + DAT_0800f5dc) & 0xff) != 5) {
    return;
  }
  puVar7 = (ushort *)(param_1 + 0x6e);
  *(ushort *)(param_1 + 0x6c) = *puVar7;
  *puVar7 = (ushort)*(undefined4 *)(param_1 + 0x34);
  iVar6 = (uint)*puVar7 - (uint)*(ushort *)(param_1 + 0x6c);
  if (iVar6 < DAT_0800f5e0) {
    iVar6 = *(int *)(param_1 + 0x4c) + -0x40;
  }
  else {
    if (iVar6 < 0x101) goto LAB_0800f5f2;
    iVar6 = *(int *)(param_1 + 0x4c) + 0x40;
  }
  *(int *)(param_1 + 0x4c) = iVar6;
LAB_0800f5f2:
  iVar5 = (int)((uint)*puVar7 + *(int *)(param_1 + 0x4c)) >> 4;
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = iVar5 + 7;
  }
  *(char *)(iVar1 + DAT_0800f618) = (char)iVar5 + (char)(iVar6 >> 3) * -8;
  return;
}


