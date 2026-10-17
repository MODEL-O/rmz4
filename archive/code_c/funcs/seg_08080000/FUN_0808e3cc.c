// undefined FUN_0808e3cc(void)
// entry 0x808e3cc


undefined4 FUN_0808e3cc(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar8 = (uint)*(byte *)(param_1 + 0xd);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0808e95c(param_1);
    FUN_0801cf00(param_1,DAT_0808e56c);
    iVar5 = DAT_0808e570;
    *(uint *)(param_1 + 0xc0) =
         *(int *)(uVar8 * 8 + DAT_0808e570) * ((uint)bVar1 * 2 + -1) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = *(int *)(uVar8 * 8 + iVar5 + 4) - *(int *)(param_1 + 0x68);
    *(short *)(param_1 + 0xbc) = *(short *)(uVar8 * 2 + DAT_0808e574) - *(short *)(param_1 + 0xb8);
    *(ushort *)(param_1 + 0xbe) =
         (*(byte *)(DAT_0808e578 + uVar8) + 0x80 & 0xff) - (*(byte *)(param_1 + 0x12) + 0x80 & 0xff)
    ;
    iVar5 = (int)*(short *)(param_1 + 0xba);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x60) = iVar5;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  psVar9 = (short *)(param_1 + 0xba);
  if (*psVar9 != 0) {
    *psVar9 = *psVar9 + -1;
  }
  uVar6 = FUN_08128fb8((int)*psVar9 << 6,*(undefined4 *)(param_1 + 0x60));
  iVar5 = DAT_0808e570;
  uVar6 = (uint)*(ushort *)
                 ((*(ushort *)((uVar6 & 0xff) * 2 + DAT_0808e57c) >> 2 & 0xff) * 2 + DAT_0808e57c);
  iVar10 = *(int *)(uVar8 * 8 + DAT_0808e570);
  iVar12 = *(int *)(iVar4 + 0x54);
  iVar7 = FUN_08128fb8(*(int *)(param_1 + 0xc0) * uVar6,0x100);
  iVar7 = (iVar12 + iVar10 * ((uint)bVar1 * 2 + -1)) - iVar7;
  *(int *)(param_1 + 0x54) = iVar7;
  iVar12 = *(int *)(iVar4 + 0x58);
  iVar5 = *(int *)(uVar8 * 8 + iVar5 + 4);
  iVar10 = FUN_08128fb8(*(int *)(param_1 + 0x5c) * uVar6,0x100);
  iVar10 = (iVar12 + iVar5) - iVar10;
  *(int *)(param_1 + 0x58) = iVar10;
  *(int *)(param_1 + 100) = iVar7 - *(int *)(iVar4 + 0x54);
  *(int *)(param_1 + 0x68) = iVar10 - *(int *)(iVar4 + 0x58);
  psVar9 = (short *)(uVar8 * 2 + DAT_0808e574);
  sVar3 = FUN_08128fb8((int)*(short *)(param_1 + 0xbc) * uVar6,0x100);
  sVar3 = *psVar9 - sVar3;
  *(short *)(param_1 + 0x50) = sVar3;
  *(short *)(param_1 + 0x52) = sVar3;
  *(short *)(param_1 + 0xb8) = sVar3;
  pcVar11 = (char *)(DAT_0808e578 + uVar8);
  cVar2 = FUN_08128fb8((int)*(short *)(param_1 + 0xbe) * uVar6,0x100);
  cVar2 = *pcVar11 - cVar2;
  *(char *)(param_1 + 0x24) = cVar2;
  *(char *)(param_1 + 0x12) = cVar2;
  return in_lr;
}


