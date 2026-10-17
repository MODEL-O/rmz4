// undefined FUN_08002b10(void)
// entry 0x8002b10


undefined8 FUN_08002b10(ushort param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)param_1;
  if (*(short *)(uVar2 * 8 + DAT_08002b3c + 4) == *(short *)(DAT_08002b3c + 0x14c)) {
    if ((*DAT_08002b40 == 0) || (*DAT_08002b40 == 0x29)) {
      *DAT_08002b40 = param_1;
    }
  }
  else {
    if (uVar2 == 0) {
      iVar1 = 0;
      goto LAB_08002b56;
    }
    FUN_081277b4(uVar2);
  }
  iVar1 = (int)(short)param_1;
LAB_08002b56:
  return CONCAT44(in_lr,iVar1);
}


