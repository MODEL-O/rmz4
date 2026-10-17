// undefined FUN_08119944(void)
// entry 0x8119944


undefined8 FUN_08119944(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    if ((int)(1 << uVar2 & (uint)*(ushort *)(*(int *)(param_1 + DAT_08119964) + 0xca)) >> uVar2 != 0
       ) {
      uVar1 = 1;
      goto LAB_08119974;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 8);
  uVar1 = 0;
LAB_08119974:
  return CONCAT44(in_lr,uVar1);
}


