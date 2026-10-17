// undefined FUN_0800b5ec(void)
// entry 0x800b5ec


void FUN_0800b5ec(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  
  iVar1 = param_1 + 0x14;
  local_1c = (*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38) >> 8) + *(int *)(param_1 + 0x50);
  local_20 = ((*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34) >> 8) + *(int *)(param_1 + 0x4c))
             - (*(int *)(param_1 + 0x68) >> 4);
  uVar2 = (local_20 -
          ((*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x3c) >> 8) + *(int *)(param_1 + 0x54))) +
          0xf;
  uVar3 = (local_1c -
          ((*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) >> 8) + *(int *)(param_1 + 0x58))) +
          0xf;
  local_20 = (*(int *)(param_1 + 0x2c) >> 8) + local_20;
  local_1c = (*(int *)(param_1 + 0x30) >> 8) + local_1c;
  if (*(short *)(param_1 + 0xc) == 0) {
    if (((uVar2 < 0x1f) && (uVar3 < 0x1f)) && (*(short *)(0x02000ab0 + 0x2c000) == 0)) {
      FUN_08005124(iVar1,&local_20,0x02000ab0 + 0x0002c024,0x02000ab0 + 0x7e0);
    }
    else {
      FUN_08004f80(iVar1,&local_20,0x0202cad4,0x0202cad4 + 0xfffd47bc);
    }
    *(undefined2 *)(0x02000ab0 + 0x2c000) = 0;
  }
  else {
    if (((uVar2 < 0x1f) && (uVar3 < 0x1f)) && (*(char *)(0x02000ab0 + 0x0002d02d) == '\0')) {
      FUN_08003620(iVar1,&local_20,
                   (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + 0x02000a04) & 0x1f00) * 8 +
                   0x6000000);
    }
    else {
      FUN_08003fe0(iVar1,&local_20,
                   (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + 0x02000a04) & 0x1f00) * 8 +
                   0x6000000);
    }
    *(undefined1 *)(0x02000ab0 + 0x0002d02d) = 0;
  }
  FUN_0800531c(iVar1,(*(uint *)(param_1 + 0x5c) >> 4) * 4 + 0x02000a0c);
  return;
}


