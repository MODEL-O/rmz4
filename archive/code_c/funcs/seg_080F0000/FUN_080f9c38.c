// undefined FUN_080f9c38(void)
// entry 0x80f9c38


undefined4 FUN_080f9c38(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080f9d5c);
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080f9d60;
    FUN_080d0dc4(0,&local_1c,0x200,*(undefined1 *)(param_1 + 0xb6));
    FUN_080e057c(param_1 + 0x54,0,bVar1 >> 4 & 1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080f9d64);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    FUN_08002b10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar3 = DAT_080f9d6c * *DAT_080f9d68 + DAT_080f9d70;
    local_1c = *(int *)(param_1 + 0x54) + (((uVar3 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar3 = DAT_080f9d6c * (uVar3 & 0x7fffffff) + DAT_080f9d70;
    *DAT_080f9d68 = uVar3 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + ((uVar3 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_080f9d74;
    FUN_080d0c88(1,&local_1c);
    FUN_080f9e70(param_1);
    FUN_0802ab88(4,0x2a,param_1 + 0x54);
    cVar2 = *(char *)(DAT_080f9d78 + 0x26);
    if (cVar2 != '\0') {
      *(char *)(DAT_080f9d78 + 0x26) = cVar2 + -1;
    }
    if (*(ushort *)(DAT_080f9d7c + 0xc) <= DAT_080f9d80) {
      *(ushort *)(DAT_080f9d7c + 0xc) = *(ushort *)(DAT_080f9d7c + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f9d84);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


