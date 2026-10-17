// undefined FUN_0802df78(void)
// entry 0x802df78


undefined8 FUN_0802df78(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar7 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar5 = (uint)*(byte *)(param_1 + 0x188 + uVar7);
      iVar1 = uVar5 * 0x18;
      iVar2 = iVar1 + DAT_0802e010;
      if (((DAT_0802e014 & *(ushort *)(iVar2 + 0x1d6)) != 0xf) &&
         ((param_2 - *(int *)(iVar1 + DAT_0802e010 + 0x1dc)) + (uint)*(ushort *)(iVar2 + 0x1d8) <
          (uint)*(ushort *)(iVar2 + 0x1d8) << 1)) {
        piVar4 = (int *)(iVar1 + DAT_0802e018);
        puVar3 = (ushort *)(iVar2 + 0x1da);
        if ((param_3 - *piVar4) + (uint)*puVar3 < (uint)*puVar3 << 1) {
          FUN_0802e63c(param_1,uVar5);
          iVar1 = *piVar4;
          if (iVar1 < param_3) {
            iVar1 = (iVar1 + (uint)*puVar3) - param_3;
          }
          else {
            iVar1 = ((iVar1 - (uint)*puVar3) - param_3) + -1;
          }
          if ((iVar6 == 0) || (iVar6 < iVar1)) {
            iVar6 = iVar1;
          }
        }
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,iVar6);
}


