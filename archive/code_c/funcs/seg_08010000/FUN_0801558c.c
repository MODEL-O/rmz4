// undefined FUN_0801558c(void)
// entry 0x801558c


undefined4 FUN_0801558c(int param_1)

{
  short sVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = 0x9f;
  puVar2 = (uint *)FUN_08000a70(0x280);
  iVar4 = DAT_08015658;
  if (puVar2 != (uint *)0x0) {
    *(uint **)(DAT_08015658 + 0x174) = puVar2;
    *(undefined4 *)(iVar4 + 0x178) = DAT_0801565c;
    *(undefined4 *)(iVar4 + 0x17c) = DAT_08015660;
    uVar3 = *(uint *)(param_1 + 0x34);
    uVar6 = (*(int *)(param_1 + 0x38) + DAT_08015664) * 0x10000;
    iVar4 = (int)uVar6 >> 0x10;
    if (0xa7 < iVar4 + 0x9f) {
      puVar5 = puVar2 + 0x9f;
      do {
        *puVar5 = uVar6 | (uVar3 & 0x3ffff) >> 2;
        puVar5 = puVar5 + -1;
        iVar7 = iVar7 + -1;
        if (iVar4 + iVar7 < 0xa8) break;
      } while (-1 < iVar7);
    }
    sVar1 = (short)iVar7;
    uVar3 = *(uint *)(param_1 + 0x34);
    iVar4 = 0;
    if ((uint)(int)sVar1 < 0x80000000) {
      iVar7 = (int)(short)((short)*(undefined4 *)(param_1 + 0x38) + (short)DAT_08015668);
      if (iVar7 < 0xa0) {
        puVar5 = puVar2;
        do {
          *puVar5 = iVar7 << 0x10 | (uVar3 & 0x1ffff) >> 1;
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + 1;
          if (sVar1 < iVar4) {
            return in_lr;
          }
        } while (iVar7 + iVar4 < 0xa0);
      }
      iVar7 = DAT_0801566c;
      if (iVar4 <= sVar1) {
        uVar3 = iVar4 * -0x10000 + 0xa00000;
        puVar2 = puVar2 + iVar4;
        do {
          *puVar2 = uVar3;
          puVar2 = puVar2 + 1;
          uVar3 = uVar3 + iVar7;
          iVar4 = iVar4 + 1;
        } while (iVar4 <= sVar1);
      }
    }
  }
  return in_lr;
}


