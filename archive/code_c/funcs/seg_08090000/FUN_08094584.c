// undefined FUN_08094584(void)
// entry 0x8094584


undefined4 FUN_08094584(int param_1)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x10) == '\x02') {
    puVar4 = (uint *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_08094670);
    uVar2 = *puVar4;
    pbVar3 = (byte *)(((int)uVar2 >> 3) + DAT_0809466c + 4);
    *pbVar3 = (byte)(1 << (uVar2 & 7)) | *pbVar3;
    uVar2 = *puVar4;
    pbVar3 = (byte *)(((int)uVar2 >> 3) + DAT_08094674);
    *pbVar3 = (byte)(1 << (uVar2 & 7)) | *pbVar3;
  }
  FUN_08002b10(0x2a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  uVar2 = DAT_0809467c * *DAT_08094678 + DAT_08094680;
  local_1c = *(int *)(param_1 + 0x54) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar2 = DAT_0809467c * (uVar2 & 0x7fffffff) + DAT_08094680;
  *DAT_08094678 = uVar2 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + ((uVar2 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_08094684;
  FUN_080d0c88(1,&local_1c);
  FUN_08094e6c(param_1);
  FUN_08094f00(param_1);
  if (*(ushort *)(DAT_08094688 + 0xc) <= DAT_0809468c) {
    *(ushort *)(DAT_08094688 + 0xc) = *(ushort *)(DAT_08094688 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08094690);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


