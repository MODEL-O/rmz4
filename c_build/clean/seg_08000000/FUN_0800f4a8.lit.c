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
  iVar1 = 0x02000a04;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar7 = (ushort *)(uVar2 * 2 + 0x02000a04);
    uVar4 = *(uint *)(param_1 + 100) | 0x00008047;
    *puVar7 = (ushort)uVar4;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x200;
    FUN_08128be0((*(int *)0x08b2c154) + 0x08b2c15c,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0((*(int *)0x08b2c158) + 0x08b2c160,(*puVar7 & 0x1f00) * 8 + 0x06000800,0x200);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined1 *)(0x02000ab0 + 0x0002d02a) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  psVar3 = (short *)(param_1 + 0x68);
  if ((*psVar3 == 0) && (*(int *)((*(int *)0x0202dbf0) + 0x58) <= 0x00127fff)) {
    FUN_08002b10(0x79);
    *psVar3 = 0x79;
  }
  if ((*psVar3 == 0x79) && (0x00127fff < *(int *)((*(int *)0x0202dbf0) + 0x58))) {
    FUN_08002b5c(0x79);
    *psVar3 = 0;
  }
  iVar1 = 0x02000ab0;
  if (*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 != 4) {
    return;
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) != 5) {
    return;
  }
  puVar7 = (ushort *)(param_1 + 0x6e);
  *(ushort *)(param_1 + 0x6c) = *puVar7;
  *puVar7 = (ushort)*(undefined4 *)(param_1 + 0x34);
  iVar6 = (uint)*puVar7 - (uint)*(ushort *)(param_1 + 0x6c);
  if (iVar6 < 0xffffff00) {
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
  *(char *)(iVar1 + 0x0002d02a) = (char)iVar5 + (char)(iVar6 >> 3) * -8;
  return;
}


