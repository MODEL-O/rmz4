// undefined FUN_08012470(void)
// entry 0x8012470


undefined4 FUN_08012470(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = 0x9f;
  iVar1 = FUN_08000a70(0x280);
  iVar3 = DAT_08012584;
  if (iVar1 != 0) {
    *(int *)(DAT_08012584 + 0x174) = iVar1;
    *(undefined4 *)(iVar3 + 0x178) = DAT_08012588;
    *(undefined4 *)(iVar3 + 0x17c) = DAT_0801258c;
    uVar2 = *(uint *)(param_1 + 0x34);
    iVar3 = *(int *)(param_1 + 0x38) + DAT_08012590;
    uVar6 = iVar3 * 0x10000;
    iVar4 = (int)uVar6 >> 0x10;
    if (0x47 < iVar4 + 0x9f) {
      puVar5 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar5 = uVar6 | (uVar2 & 0x1ffff) >> 1;
        puVar5 = puVar5 + -1;
        iVar7 = iVar7 + -1;
        if (iVar4 + iVar7 < 0x48) break;
      } while (-1 < iVar7);
    }
    uVar2 = *(uint *)(param_1 + 0x34);
    uVar6 = iVar3 * 0x10000;
    iVar3 = (int)uVar6 >> 0x10;
    if ((0x37 < iVar3 + iVar7) && (-1 < iVar7)) {
      puVar5 = (uint *)(iVar7 * 4 + iVar1);
      do {
        *puVar5 = uVar6 | (uVar2 & 0x3ffff) >> 2;
        puVar5 = puVar5 + -1;
        iVar7 = iVar7 + -1;
        if (iVar3 + iVar7 < 0x38) break;
      } while (-1 < iVar7);
    }
    uVar2 = *(uint *)(param_1 + 0x34);
    if ((0x2f < iVar3 + iVar7) && (-1 < iVar7)) {
      puVar5 = (uint *)(iVar7 * 4 + iVar1);
      do {
        *puVar5 = uVar6 | (uVar2 & 0x7ffff) >> 3;
        puVar5 = puVar5 + -1;
        iVar7 = iVar7 + -1;
        if (iVar3 + iVar7 < 0x30) break;
      } while (-1 < iVar7);
    }
    uVar2 = *(uint *)(param_1 + 0x34);
    if ((-1 < iVar3 + iVar7) && (-1 < iVar7)) {
      puVar5 = (uint *)(iVar7 * 4 + iVar1);
      do {
        *puVar5 = uVar6 | (uVar2 & 0xfffff) >> 4;
        puVar5 = puVar5 + -1;
        iVar7 = iVar7 + -1;
        if (iVar3 + iVar7 < 0) {
          return in_lr;
        }
      } while (-1 < iVar7);
    }
  }
  return in_lr;
}


