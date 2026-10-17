// undefined FUN_08094198(void)
// entry 0x8094198


undefined4 FUN_08094198(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      puVar5 = (uint *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080942ac);
      uVar3 = *puVar5;
      pbVar4 = (byte *)(((int)uVar3 >> 3) + DAT_080942a8 + 4);
      *pbVar4 = (byte)(1 << (uVar3 & 7)) | *pbVar4;
      uVar3 = *puVar5;
      pbVar4 = (byte *)(((int)uVar3 >> 3) + DAT_080942b0);
      *pbVar4 = (byte)(1 << (uVar3 & 7)) | *pbVar4;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080942b4);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    FUN_08002b10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar3 = DAT_080942bc * *DAT_080942b8 + DAT_080942c0;
    local_1c = *(int *)(param_1 + 0x54) + (((uVar3 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar3 = DAT_080942bc * (uVar3 & 0x7fffffff) + DAT_080942c0;
    *DAT_080942b8 = uVar3 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + ((uVar3 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_080942c4;
    FUN_080d0c88(1,&local_1c);
    FUN_08094df0(param_1);
    FUN_08094f00(param_1);
    if (*(ushort *)(DAT_080942c8 + 0xc) <= DAT_080942cc) {
      *(ushort *)(DAT_080942c8 + 0xc) = *(ushort *)(DAT_080942c8 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080942d0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


