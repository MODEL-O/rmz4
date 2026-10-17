// undefined FUN_08128ee4(void)
// entry 0x8128ee4


undefined8 FUN_08128ee4(ushort param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 in_lr;
  short local_14 [4];
  
  psVar5 = local_14;
  uVar4 = DAT_08128f04;
  if (param_1 < *(ushort *)(*DAT_08128f00 + 4)) {
    FUN_08128cc0(param_1,local_14);
    bVar3 = 0;
    do {
      sVar1 = *param_2;
      sVar2 = *psVar5;
      psVar5 = psVar5 + 1;
      param_2 = param_2 + 1;
      if (sVar1 != sVar2) {
        uVar4 = 0x8000;
        break;
      }
      bVar3 = bVar3 + 1;
      uVar4 = 0;
    } while (bVar3 < 4);
  }
  return CONCAT44(in_lr,uVar4);
}


