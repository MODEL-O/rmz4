// undefined FUN_080dafa4(void)
// entry 0x80dafa4


undefined4 FUN_080dafa4(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 in_lr;
  
  puVar2 = DAT_080db018;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080db018 = *DAT_080db018 | 0x4000;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x31;
    *(byte *)(puVar2 + 7) = (byte)puVar2[7] | 0xe;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
    *(undefined1 *)(param_1 + 0x76) = 0;
    *(undefined1 *)(param_1 + 0x7a) = 0xff;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar7 = *(int *)(*DAT_080db01c + 0x54);
  iVar9 = *(int *)(*DAT_080db01c + 0x58) + DAT_080db020;
  uVar5 = FUN_08129050(*(byte *)(param_1 + 0x13) + 1,3);
  *(undefined1 *)(param_1 + 0x13) = uVar5;
  iVar4 = DAT_080db1dc;
  iVar6 = DAT_080db110;
  iVar3 = DAT_080db0a4;
  bVar1 = *(byte *)(param_1 + 0x13);
  if (bVar1 == 1) {
    pbVar8 = (byte *)(param_1 + 0x7b);
    *(int *)(param_1 + 0x54) = *(short *)((*pbVar8 + 0x80 & 0xff) * 2 + DAT_080db110) * 3 + iVar7;
    *(int *)(param_1 + 0x58) = *(short *)((*pbVar8 + 0x40 & 0xff) * 2 + iVar6) * 3 + iVar9;
    *(int *)(param_1 + 100) = *(short *)((uint)*pbVar8 * 2 + iVar6) * 3 + iVar7;
    *(int *)(param_1 + 0x68) = *(short *)((*pbVar8 + 0xc0 & 0xff) * 2 + iVar6) * 3 + iVar9;
    *(undefined1 *)(param_1 + 0x74) = 0x1f;
    uVar5 = 0x1c;
LAB_080db168:
    *(undefined1 *)(param_1 + 0x75) = uVar5;
  }
  else {
    iVar6 = DAT_080db030;
    if (1 < bVar1) {
      if (bVar1 != 2) goto LAB_080db170;
      pbVar8 = (byte *)(param_1 + 0x7b);
      *(int *)(param_1 + 0x54) = *(short *)((*pbVar8 + 0x80 & 0xff) * 2 + DAT_080db1dc) + iVar7;
      *(int *)(param_1 + 0x58) = *(short *)((*pbVar8 + 0x40 & 0xff) * 2 + iVar4) + iVar9;
      *(int *)(param_1 + 100) = *(short *)((uint)*pbVar8 * 2 + iVar4) + iVar7;
      *(int *)(param_1 + 0x68) = *(short *)((*pbVar8 + 0xc0 & 0xff) * 2 + iVar4) + iVar9;
      uVar5 = 0x1f;
      *(undefined1 *)(param_1 + 0x74) = 0x1f;
      iVar6 = iVar4;
      goto LAB_080db168;
    }
    if (bVar1 != 0) goto LAB_080db170;
    pbVar8 = (byte *)(param_1 + 0x7b);
    *(int *)(param_1 + 0x54) = *(short *)((*pbVar8 + 0x80 & 0xff) * 2 + DAT_080db0a4) * 5 + iVar7;
    *(int *)(param_1 + 0x58) = *(short *)((*pbVar8 + 0x40 & 0xff) * 2 + iVar3) * 5 + iVar9;
    *(int *)(param_1 + 100) = *(short *)((uint)*pbVar8 * 2 + iVar3) * 5 + iVar7;
    *(int *)(param_1 + 0x68) = *(short *)((*pbVar8 + 0xc0 & 0xff) * 2 + iVar3) * 5 + iVar9;
    *(undefined1 *)(param_1 + 0x74) = 0x1f;
    *(undefined1 *)(param_1 + 0x75) = 10;
    uVar5 = 0x14;
    iVar6 = iVar3;
  }
  *(undefined1 *)(param_1 + 0x76) = uVar5;
LAB_080db170:
  pbVar8 = (byte *)(param_1 + 0x7b);
  pbVar10 = (byte *)(param_1 + 0x7a);
  *(uint *)(param_1 + 0x5c) =
       *(int *)(param_1 + 100) +
       (uint)*pbVar10 * (int)*(short *)((*pbVar8 + 0x40 & 0xff) * 2 + iVar6);
  *(uint *)(param_1 + 0x60) =
       *(int *)(param_1 + 0x68) + (uint)*pbVar10 * (int)*(short *)((uint)*pbVar8 * 2 + iVar6);
  *(uint *)(param_1 + 0x7c) =
       *(int *)(param_1 + 0x54) +
       (uint)*pbVar10 * (int)*(short *)((*pbVar8 + 0x40 & 0xff) * 2 + iVar6);
  *(uint *)(param_1 + 0x80) =
       *(int *)(param_1 + 0x58) + (uint)*pbVar10 * (int)*(short *)((uint)*pbVar8 * 2 + iVar6);
  *pbVar8 = *pbVar8 + 1;
  return in_lr;
}


