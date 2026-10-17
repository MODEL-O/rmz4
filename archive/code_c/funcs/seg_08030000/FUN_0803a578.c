// undefined FUN_0803a578(void)
// entry 0x803a578


undefined8 FUN_0803a578(int param_1,byte param_2,byte param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = (uint)param_3;
  if ((*(byte *)(param_1 + 0xfa) == 2) && (*(char *)(param_1 + DAT_0803a5f0) != -1)) {
    *(byte *)(param_1 + 0xfa) = param_2;
    *(byte *)(param_1 + 0xc3) = param_3;
    uVar1 = FUN_0803a608(param_1,(uint)param_2,uVar6);
    *(undefined1 *)(param_1 + 0xe6) = uVar1;
    if (*(byte *)(param_1 + 199) < 4) {
      piVar5 = (int *)((uint)param_2 * 4 + DAT_0803a5f8);
      uVar3 = *piVar5 + uVar6;
      pbVar4 = (byte *)((uVar3 >> 3) + DAT_0803a5f4 + 4);
      *pbVar4 = (byte)(1 << (uVar3 & 7)) | *pbVar4;
      uVar6 = *piVar5 + uVar6;
      pbVar4 = (byte *)((uVar6 >> 3) + DAT_0803a5fc);
      *pbVar4 = (byte)(1 << (uVar6 & 7)) | *pbVar4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


