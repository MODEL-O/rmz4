// undefined FUN_0802de7c(void)
// entry 0x802de7c


undefined8 FUN_0802de7c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar7 = 0;
  uVar8 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar5 = (uint)*(byte *)(param_1 + 0x188 + uVar8);
      iVar2 = uVar5 * 0x18;
      iVar3 = iVar2 + DAT_0802df1c;
      if ((DAT_0802df20 & *(ushort *)(iVar3 + 0x1d6)) != 0xf) {
        piVar6 = (int *)(iVar2 + DAT_0802df1c + 0x1dc);
        puVar4 = (ushort *)(iVar3 + 0x1d8);
        if (((param_2 - *piVar6) + (uint)*puVar4 < (uint)*puVar4 << 1) &&
           ((param_3 - *(int *)(iVar2 + DAT_0802df24)) + (uint)*(ushort *)(iVar3 + 0x1da) <
            (uint)*(ushort *)(iVar3 + 0x1da) << 1)) {
          FUN_0802e63c(param_1,uVar5);
          iVar2 = *piVar6;
          if (iVar2 < *(int *)(param_1 + 0x54)) {
            iVar2 = (iVar2 + (uint)*puVar4) - param_2;
          }
          else {
            iVar2 = ((iVar2 - (uint)*puVar4) - param_2) + -1;
          }
          if (iVar7 != 0) {
            iVar3 = iVar2;
            if (iVar2 < 0) {
              iVar3 = -iVar2;
            }
            iVar1 = iVar7;
            if (iVar7 < 0) {
              iVar1 = -iVar7;
            }
            if (iVar1 <= iVar3) goto LAB_0802df4e;
          }
          iVar7 = iVar2;
        }
      }
LAB_0802df4e:
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,iVar7);
}


