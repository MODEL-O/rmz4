// undefined FUN_0800627c(void)
// entry 0x800627c


void FUN_0800627c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  iVar1 = 0x030032e0;
  iVar7 = 0x030032e0 + 0x610;
  uVar3 = 0;
  do {
    uVar6 = uVar3 + 1;
    if (((int)(uint)*(byte *)(iVar1 + 1) >> (uVar3 & 0xff) & 1U) != 0) {
      for (piVar5 = *(int **)(uVar3 * 4 + iVar7); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
        *(byte *)(piVar5[2] + 0x23) = *(byte *)(piVar5[2] + 0x23) & 0xf;
        iVar4 = piVar5[2];
        if (*(short *)(iVar4 + 0x30) == 0) {
          uVar2 = *(uint *)(iVar4 + 0x18);
          uVar3 = 0x200;
        }
        else {
          *(undefined2 *)(iVar4 + 0x30) = 0;
          iVar4 = piVar5[2];
          uVar2 = *(uint *)(iVar4 + 0x18);
          uVar3 = 0x00000201;
        }
        *(uint *)(iVar4 + 0x18) = uVar2 | uVar3;
      }
    }
    uVar3 = uVar6;
  } while ((int)uVar6 < 3);
  return;
}


