// undefined FUN_08007b84(void)
// entry 0x8007b84


undefined4 FUN_08007b84(int *param_1)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar2;
  
  iVar5 = 0x280000;
  iVar4 = *param_1;
  if (0x0005effe < (uint)(iVar4 + 0xfff5afff)) goto LAB_08007c66;
  if (0x000e3fff < iVar4) {
    iVar3 = param_1[1];
    if (0x0001dfff < iVar3) {
      uVar1 = 0x00000ffe;
      iVar2 = 0xfff07fff;
      if (0x00026fff < iVar3) {
        if (iVar3 <= 0x00028fff) {
          if (iVar4 <= 0x000fbfff) {
            if (iVar4 + 0xfff07000 < 1) {
              iVar5 = 0x27000;
            }
            else {
              iVar5 = (iVar4 + 0xfff07000 >> 1) + 0x27000;
            }
          }
          goto LAB_08007c66;
        }
        uVar1 = 0x00002ffe;
        iVar2 = 0xfff06fff;
        if (iVar3 <= 0x00036fff) goto LAB_08007c5e;
      }
      else {
LAB_08007c5e:
        if (uVar1 < (uint)(iVar4 + iVar2)) goto LAB_08007c66;
      }
      iVar5 = 0x37000;
      goto LAB_08007c66;
    }
    if (0x000f4fff < iVar4) {
      if (iVar4 <= 0x000f8fff) {
        if (iVar4 + 0xfff0b000 < 1) {
          iVar5 = 0x1ac00;
        }
        else {
          iVar5 = (iVar4 + 0xfff0b000 >> 1) + 0x1ac00;
        }
      }
      goto LAB_08007c66;
    }
    if (0 < iVar4 + 0xfff10000) {
      iVar5 = FUN_08128fb8(iVar4 + 0xfff10000,6);
      iVar5 = iVar5 + 0x1a000;
      goto LAB_08007c66;
    }
  }
  iVar5 = 0x1a000;
LAB_08007c66:
  return iVar5;
}


