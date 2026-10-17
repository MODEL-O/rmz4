// undefined FUN_080f9a88(void)
// entry 0x80f9a88


undefined4 FUN_080f9a88(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080f9c0c);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar5 = DAT_080f9c14 * *DAT_080f9c10 + DAT_080f9c18;
    local_20 = *(int *)(param_1 + 0x54) + (((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) - 0xf) * 0x100;
    uVar5 = DAT_080f9c14 * (uVar5 & 0x7fffffff) + DAT_080f9c18;
    *DAT_080f9c10 = uVar5 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) +
               ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) * 0x100 + DAT_080f9c1c;
    FUN_080d0c88(2,&local_20);
  }
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == '\0') {
    FUN_08002b10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    iVar3 = DAT_080f9c18;
    iVar2 = DAT_080f9c14;
    puVar1 = DAT_080f9c10;
    uVar5 = DAT_080f9c14 * *DAT_080f9c10 + DAT_080f9c18;
    local_20 = *(int *)(param_1 + 0x54) + (((uVar5 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar5 = DAT_080f9c14 * (uVar5 & 0x7fffffff) + DAT_080f9c18;
    *DAT_080f9c10 = uVar5 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + ((uVar5 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_080f9c20;
    FUN_080d0c88(1,&local_20);
    uVar5 = iVar2 * *puVar1 + iVar3;
    local_20 = *(int *)(param_1 + 0x54) + (((uVar5 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar5 = iVar2 * (uVar5 & 0x7fffffff) + iVar3;
    *puVar1 = uVar5 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + ((uVar5 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_080f9c24;
    FUN_080d0c88(1,&local_20);
    FUN_080f9df0(param_1);
    FUN_0802ab88(4,0x2a,param_1 + 0x54);
    cVar4 = *(char *)(DAT_080f9c28 + 0x26);
    if (cVar4 != '\0') {
      *(char *)(DAT_080f9c28 + 0x26) = cVar4 + -1;
    }
    if (*(ushort *)(DAT_080f9c2c + 0xc) <= DAT_080f9c30) {
      *(ushort *)(DAT_080f9c2c + 0xc) = *(ushort *)(DAT_080f9c2c + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f9c34);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0x10);
  }
  return in_lr;
}


