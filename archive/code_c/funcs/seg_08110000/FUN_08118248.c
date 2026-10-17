// undefined FUN_08118248(void)
// entry 0x8118248


undefined8 FUN_08118248(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + DAT_0811826c) == '\0') && ((*(ushort *)(DAT_08118270 + 4) & 2) != 0)) {
    *(undefined1 *)(param_1 + 1) = 3;
    *(undefined1 *)(param_1 + 2) = 3;
  }
  else {
    if ((*(ushort *)(DAT_08118270 + 4) & 0x200) == 0) {
      if ((*(ushort *)(DAT_08118270 + 4) & 0x100) == 0) {
        uVar2 = 0;
        goto LAB_081182ea;
      }
      pbVar3 = (byte *)(param_1 + DAT_081182f0 + 1);
      *pbVar3 = *(char *)(param_1 + DAT_081182f0) + 1U & 3;
      *(undefined1 *)(param_1 + 2) = 0;
      puVar1 = (undefined4 *)((uint)*pbVar3 * 4 + DAT_081182f4);
    }
    else {
      pbVar3 = (byte *)(param_1 + DAT_081182a8);
      *pbVar3 = *(char *)(param_1 + DAT_081182a4) + 3U & 3;
      *(undefined1 *)(param_1 + 2) = 0;
      puVar1 = (undefined4 *)((uint)*pbVar3 * 4 + DAT_081182ac);
    }
    FUN_08128f80(param_1,*puVar1);
    FUN_08002b10(0x33);
  }
  uVar2 = 1;
LAB_081182ea:
  return CONCAT44(in_lr,uVar2);
}


