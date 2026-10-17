// undefined FUN_08007b84(void)
// entry 0x8007b84


undefined8 FUN_08007b84(int *param_1)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int iVar2;
  
  iVar5 = 0x280000;
  iVar4 = *param_1;
  if (DAT_08007ba8 < (uint)(iVar4 + DAT_08007ba4)) goto LAB_08007c66;
  if (DAT_08007bac < iVar4) {
    iVar3 = param_1[1];
    if (DAT_08007bd4 < iVar3) {
      uVar1 = DAT_08007c1c;
      iVar2 = DAT_08007c18;
      if (DAT_08007c14 < iVar3) {
        if (iVar3 <= DAT_08007c40) {
          if (iVar4 <= DAT_08007c44) {
            if (iVar4 + DAT_08007c48 < 1) {
              iVar5 = 0x27000;
            }
            else {
              iVar5 = (iVar4 + DAT_08007c48 >> 1) + 0x27000;
            }
          }
          goto LAB_08007c66;
        }
        uVar1 = DAT_08007c78;
        iVar2 = DAT_08007c74;
        if (iVar3 <= DAT_08007c70) goto LAB_08007c5e;
      }
      else {
LAB_08007c5e:
        if (uVar1 < (uint)(iVar4 + iVar2)) goto LAB_08007c66;
      }
      iVar5 = 0x37000;
      goto LAB_08007c66;
    }
    if (DAT_08007bd8 < iVar4) {
      if (iVar4 <= DAT_08007bf8) {
        if (iVar4 + DAT_08007bfc < 1) {
          iVar5 = 0x1ac00;
        }
        else {
          iVar5 = (iVar4 + DAT_08007bfc >> 1) + 0x1ac00;
        }
      }
      goto LAB_08007c66;
    }
    if (0 < iVar4 + DAT_08007bdc) {
      iVar5 = FUN_08128fb8(iVar4 + DAT_08007bdc,6);
      iVar5 = iVar5 + 0x1a000;
      goto LAB_08007c66;
    }
  }
  iVar5 = 0x1a000;
LAB_08007c66:
  return CONCAT44(in_lr,iVar5);
}


