// undefined FUN_0800edf8(void)
// entry 0x800edf8


void FUN_0800edf8(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  byte *pbVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  uVar4 = 0x0000ffff;
  iVar3 = 0x02000ab0;
  pbVar9 = (byte *)(0x0002d02e + 0x02000ab0);
  bVar1 = *pbVar9;
  if (bVar1 == 0) goto LAB_0800ef6a;
  bVar2 = *pbVar9;
  if (bVar2 == 2) {
LAB_0800ee74:
    pbVar9 = (byte *)(0x0002d02f + iVar3);
    bVar1 = *pbVar9;
    *pbVar9 = bVar1 + 1;
    if ((bVar1 + 1 & 1) == 0) {
      ((ushort *)0x02000a50)[5] = ((ushort)*pbVar9 * -8 + 0xa0) * 0x100 | 0xa0;
    }
    else {
      *(ushort *)(0x02000a50 + 10) = ((ushort)*pbVar9 * -8 + 0xa8) * 0x100 | 0xa0;
    }
    iVar3 = 0x02000ab0;
    pcVar11 = (char *)(0x02000ab0 + 0x0002d02f);
    if (*pcVar11 == '\n') {
      *(undefined2 *)(*(int *)(0x0202f610 + 0x000063a8) + 0xa4) = 0;
    }
    iVar6 = 0x0202e920;
    if (*pcVar11 != '\x14') goto LAB_0800ef6a;
    FUN_080275f0(0x0202e920,*(undefined4 *)(*(int *)(0x08842cf8 + 0x40) + 0x78));
    *(ushort *)(iVar6 + -8) = (ushort)0x0000fffe & *(ushort *)(iVar6 + -8) | 8;
    *pcVar11 = 'x';
    *(byte *)(0x030032e0 + 1) = *(byte *)(0x030032e0 + 1) | 2;
    pbVar9 = (byte *)(iVar3 + 0x0002d02e);
    bVar1 = *pbVar9;
  }
  else {
    if (bVar2 < 3) {
      if (bVar2 != 1) goto LAB_0800ef6a;
      *(ushort *)(0x0202e910 + 8) = (ushort)0x0000fffe & *(ushort *)(0x0202e910 + 8) | 8;
      puVar5 = 0x02000a50;
      (*(ushort *)0x02000a50) = (*(ushort *)0x02000a50) | 0x4000;
      *(undefined1 *)((int)puVar5 + 0xd) = 1;
      puVar5[3] = 0xf0;
      puVar5[5] = (ushort)0x0000a0a0;
      (*(int *)0x03002ac0) = (short)uVar4;
      *(undefined1 *)(iVar3 + 0x0002d02f) = 0;
      *pbVar9 = bVar1 + 1;
      goto LAB_0800ee74;
    }
    if ((bVar2 != 3) ||
       (cVar8 = *(char *)(0x02000ab0 + 0x0002d02f) + -1,
       *(char *)(0x02000ab0 + 0x0002d02f) = cVar8, cVar8 != '\0')) goto LAB_0800ef6a;
    *(undefined1 *)(0x030032e0 + 1) = 0;
    (*(int *)0x02000a50) = (ushort)0x0000bfff & (*(int *)0x02000a50);
  }
  *pbVar9 = bVar1 + 1;
LAB_0800ef6a:
  piVar7 = 0x08df2048;
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 4) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 1)) {
    puVar12 = (undefined1 *)(0x02000ab0 + 0x0002d029);
    uVar10 = FUN_08129120(*puVar12,6);
    iVar3 = 0x08df2bec;
    FUN_08001ea4(*piVar7 + (uVar10 & 0xff) * 0x14 + 0x08df2bec,0x4000);
    uVar10 = FUN_08129120(*puVar12,6);
    FUN_08002208(*piVar7 + (uVar10 & 0xff) * 0x14 + iVar3 + 0xc,0);
  }
  return;
}


