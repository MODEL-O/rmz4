// undefined FUN_0802e474(void)
// entry 0x802e474


undefined8 FUN_0802e474(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar1 = DAT_0802e518;
  uVar8 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      iVar4 = (uint)*(byte *)(param_1 + 0x188 + uVar8) * 0x18;
      piVar7 = (int *)(iVar4 + iVar1 + 0x1dc);
      iVar5 = iVar4 + iVar1;
      puVar6 = (ushort *)(iVar5 + 0x1d8);
      if ((((param_2 - *piVar7) + (uint)*puVar6 < (uint)*puVar6 << 1) &&
          ((param_3 - *(int *)(iVar4 + DAT_0802e51c)) + (uint)*(ushort *)(iVar5 + 0x1da) <
           (uint)*(ushort *)(iVar5 + 0x1da) << 1)) &&
         (cVar2 = FUN_0802f084(*(ushort *)(iVar5 + 0x1d6) & DAT_0802e520,0), cVar2 != '\0')) {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          if ((int)((*piVar7 + (uint)(*puVar6 >> 1)) - param_2) < 0x100) goto LAB_0802e514;
        }
        else if (DAT_0802e524 < (int)((*piVar7 - (uint)(*puVar6 >> 1)) - param_2)) {
LAB_0802e514:
          uVar3 = 1;
          goto LAB_0802e54c;
        }
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *(byte *)(param_1 + 0x1b8));
  }
  uVar3 = 0;
LAB_0802e54c:
  return CONCAT44(in_lr,uVar3);
}


