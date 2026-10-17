// undefined FUN_0802a60c(void)
// entry 0x802a60c


undefined8 FUN_0802a60c(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(int *)(DAT_0802a668 + DAT_0802a66c) + 199);
  if ((((cVar1 != '\x01') && (cVar1 != '\x03')) && (cVar1 != '\x02')) &&
     ((ushort)(*DAT_0802a670 - 3U) < 8)) {
    if (*(char *)(param_1 + 1) == '\0') {
      pbVar4 = (byte *)(*(int *)(DAT_0802a668 + DAT_0802a66c) + 0xf4);
      bVar2 = *pbVar4;
      if (7 < bVar2) goto LAB_0802a662;
      *pbVar4 = bVar2 + 1;
      FUN_0810e608(0x114,0);
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    }
    if (*(short *)(DAT_0802a674 + 2) != 0) {
      uVar3 = 1;
      goto LAB_0802a67a;
    }
  }
LAB_0802a662:
  uVar3 = 0;
LAB_0802a67a:
  return CONCAT44(in_lr,uVar3);
}


