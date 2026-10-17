// undefined FUN_08018024(void)
// entry 0x8018024


undefined4 FUN_08018024(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0x9f;
  if (*(short *)(DAT_08018110 + DAT_08018114) != 0) {
    puVar5 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08018120);
    FUN_08128be0(*DAT_08018118 + DAT_0801811c,(*puVar5 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0(*DAT_08018124 + DAT_08018128,(*puVar5 & 0x1f00) * 8 + DAT_0801812c,0x200);
  }
  iVar1 = FUN_08000a70(0x280);
  iVar4 = DAT_08018130;
  if (iVar1 != 0) {
    *(int *)(DAT_08018130 + 0x174) = iVar1;
    *(undefined4 *)(iVar4 + 0x178) = DAT_08018134;
    *(undefined4 *)(iVar4 + 0x17c) = DAT_08018138;
    iVar4 = *(int *)(param_1 + 0x38) + DAT_0801813c;
    if (0xd7 < *(int *)(param_1 + 0x38) + DAT_0801813c + 0x9f) {
      uVar2 = *(uint *)(param_1 + 0x34) & DAT_08018140;
      puVar3 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar3 = iVar4 * 0x10000 | uVar2;
        puVar3 = puVar3 + -1;
        iVar6 = iVar6 + -1;
        if (iVar4 + iVar6 < 0xd8) break;
      } while (-1 < iVar6);
    }
    if (-1 < iVar6) {
      uVar2 = *(int *)(param_1 + 0x34) * 0xe >> 4 & DAT_08018140;
      puVar3 = (uint *)(iVar6 * 4 + iVar1);
      do {
        *puVar3 = iVar4 * 0x10000 | uVar2;
        puVar3 = puVar3 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
  }
  return in_lr;
}


