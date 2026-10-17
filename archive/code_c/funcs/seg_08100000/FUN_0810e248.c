// undefined FUN_0810e248(void)
// entry 0x810e248


undefined4 FUN_0810e248(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar9 = *param_1;
  iVar11 = param_1[3];
  if (iVar11 != 0) {
    *DAT_0810e2ac = *DAT_0810e2ac | 0x100;
    sVar1 = *(short *)(iVar11 + 0xa4);
    *(undefined4 *)(iVar9 + 0x2b8) = DAT_0810e2b0;
    *(undefined4 *)(iVar9 + 0x2f8) = DAT_0810e2b4;
    iVar6 = DAT_0810e348;
    iVar5 = DAT_0810e344;
    iVar4 = DAT_0810e304;
    iVar3 = DAT_0810e300;
    iVar2 = DAT_0810e2bc;
    iVar11 = DAT_0810e2b8;
    piVar8 = (int *)(iVar9 + 0x278);
    uVar7 = (uint)sVar1;
    if ((int)uVar7 < 0x21) {
      uVar10 = 0;
      iVar9 = DAT_0810e2b8 + (uVar7 & 3) * -0x200020;
      do {
        if ((int)uVar7 < (int)(uVar10 + 4)) {
          if ((int)uVar7 < (int)uVar10) {
            *piVar8 = iVar11;
          }
          else {
            *piVar8 = iVar9;
          }
        }
        else {
          *piVar8 = iVar2;
        }
        uVar10 = uVar10 + 4 & 0xffff;
        piVar8 = piVar8 + -0x10;
      } while (uVar10 < 0x20);
    }
    else if ((int)uVar7 < 0x41) {
      uVar10 = 0;
      uVar7 = (int)((uVar7 - 0x20) * 0x10000) >> 0x10;
      iVar9 = DAT_0810e300 + (uVar7 & 3) * -0x200020;
      do {
        if ((int)uVar7 < (int)(uVar10 + 4)) {
          if ((int)uVar7 < (int)uVar10) {
            *piVar8 = iVar3;
          }
          else {
            *piVar8 = iVar9;
          }
        }
        else {
          *piVar8 = iVar4;
        }
        uVar10 = uVar10 + 4 & 0xffff;
        piVar8 = piVar8 + -0x10;
      } while (uVar10 < 0x20);
    }
    else {
      uVar10 = 0;
      uVar7 = (int)((uVar7 - 0x40) * 0x10000) >> 0x10;
      iVar9 = DAT_0810e344 + (uVar7 & 3) * -0x200020;
      do {
        if ((int)uVar7 < (int)(uVar10 + 4)) {
          if ((int)uVar7 < (int)uVar10) {
            *piVar8 = iVar5;
          }
          else {
            *piVar8 = iVar9;
          }
        }
        else {
          *piVar8 = iVar6;
        }
        uVar10 = uVar10 + 4 & 0xffff;
        piVar8 = piVar8 + -0x10;
      } while (uVar10 < 0x20);
    }
    *piVar8 = DAT_0810e36c;
  }
  return in_lr;
}


