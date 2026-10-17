// undefined FUN_080b45a8(void)
// entry 0x80b45a8


undefined4 FUN_080b45a8(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x10) * 9 + DAT_080b45fc & 0xffff);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + DAT_080b4600;
  pbVar2 = (byte *)(param_1 + 0xbc);
  bVar3 = *pbVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  FUN_080d4c8c(&local_1c,DAT_080b4604,0,bVar3);
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    FUN_080d4c8c(&local_1c,DAT_080b4630,0,bVar3);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      bVar3 = bVar3 | 0x10;
    }
    FUN_080d4c8c(&local_1c,DAT_080b4658,0,bVar3);
  }
  else {
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    FUN_080d4c8c(&local_1c,DAT_080b4680,0,bVar3);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      bVar3 = bVar3 | 0x10;
    }
    FUN_080d4c8c(&local_1c,DAT_080b46a8,0,bVar3);
  }
  FUN_080d0c88(1,&local_1c);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    FUN_08002b10(0x2a);
  }
  else {
    FUN_08002b10(0xa5);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0802ab88(3,0x29,&local_1c);
  }
  else {
    FUN_0802ab88(3,0x28,&local_1c);
  }
  if (*(ushort *)(DAT_080b4728 + 0xc) <= DAT_080b472c) {
    *(ushort *)(DAT_080b4728 + 0xc) = *(ushort *)(DAT_080b4728 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b4730);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


