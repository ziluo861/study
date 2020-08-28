let has_machine_specific_file = 1
if empty(glob('~/.config/nvim/_machine_specific.vim'))
	let has_machine_specific_file = 0
	silent! exec "!cp ~/.config/nvim/default_configs/_machine_specific_default.vim ~/.config/nvim/_machine_specific.vim"
endif
source ~/.config/nvim/_machine_specific.vim
let g:python_host_prog='/usr/bin/python2'
let g:python3_host_prog='/usr/bin/python3'

set hlsearch
set hidden
set updatetime=100
set shortmess+=c
let mapleader=" "
exec "nohlsearch"
noremap ; :
noremap <LEADER><CR> :nohlsearch<CR>
set backspace=2
"syntax on
set relativenumber
set ruler
set showmode
set nu
"set bg=dark
set fileformats=unix,dos
set fileformat=unix
set noexpandtab
set tabstop=4
set shiftwidth=4
set softtabstop=4
set autoindent 
set smartindent
set cindent
set fileencoding=utf-8
set encoding=utf-8
set showmatch 

set matchtime=2 
set ignorecase
set incsearch
set wrap
set clipboard=unnamedplus
set wildmenu
set showcmd
set smartcase
au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
filetype plugin on
filetype indent on
filetype off                  " required
filetype plugin indent on
set cursorline
"set cursorcolumn
set nocompatible              " be iMproved, required
set rtp+=~/.fzf

"set rtp+=~/.vim/bundle/Vundle.vim
"call vundle#begin()
"Plugin 'VundleVim/Vundle.vim'
"Plugin 'scrooloose/nerdcommenter'
"Plugin 'scrooloose/nerdtree'
"Plugin 'vim-scripts/taglist.vim'
"Plugin 'vim-airline/vim-airline'
"Plugin 'godlygeek/tabular'
"Plugin 'majutsushi/tagbar'
"Plugin 'nathanaelkane/vim-indent-guides'
"Plugin 'luochen1990/rainbow'
""Plugin 'altercation/vim-colors-solarized'
""Plugin 'jacoborus/tender.vim'
"Plugin 'octol/vim-cpp-enhanced-highlight'
"Plugin 'Yggdroot/indentLine'
"Plugin 'Align'
"Plugin 'tpope/vim-surround'
"Plugin 'lilydjwg/Colorizer'
"Plugin 'jiangmiao/auto-pairs'
"
"call vundle#end()            " required
"filetype plugin indent on    " required


let g:tagbar_ctags_bin = 'ctags' 
let g:tagbar_width     = 30     
let g:tagbar_autofocus = 1       
map <F4> :TagbarToggle<CR>
let Tlist_Show_One_File = 1
let Tlist_GainFocus_On_ToggleOpen = 1   
let Tlist_Exit_OnlyWindow         = 1    
let Tlist_File_Fold_Auto_Close    = 1    
let Tlist_Auto_Update             = 1    






"let g:airline_powerline_fonts                   = 1 " 使用 powerline 打过补丁的字体
"let g:airline#extensions#tabline#enabled        = 1 " 开启 tabline
"let g:airline#extensions#tabline#buffer_nr_show = 1 " 显示 buffer 编号
"let g:airline#extensions#ale#enabled            = 1 " enable ale integration
"

if !exists('g:airline_symbols')
    let g:airline_symbols = {}
endif
let g:airline_left_sep          = '⮀'
let g:airline_left_alt_sep      = '⮁'
let g:airline_right_sep         = '⮂'
let g:airline_right_alt_sep     = '⮃'
let g:airline_symbols.crypt     = '?'
let g:airline_symbols.linenr    = '⭡'
let g:airline_symbols.branch    = '⭠'

nnoremap [b :bp<CR>
nnoremap ]b :bn<CR>



noremap <C-x> :w<CR>:bd<CR>
map <leader>1 :b 1<CR>
map <leader>2 :b 2<CR>
map <leader>3 :b 3<CR>
map <leader>4 :b 4<CR>
map <leader>5 :b 5<CR>
map <leader>6 :b 6<CR>
map <leader>7 :b 7<CR>
map <leader>8 :b 8<CR>




let g:rainbow_conf = {
\	'guifgs': ['royalblue3', 'darkorange3', 'seagreen3', 'firebrick'],
\	'ctermfgs': ['lightblue', 'lightyellow', 'lightcyan', 'lightmagenta'],
\	'guis': [''],
\	'cterms': [''],
\	'operators': '_,_',
\	'parentheses': ['start=/(/ end=/)/ fold', 'start=/\[/ end=/\]/ fold', 'start=/{/ end=/}/ fold'],
\	'separately': {
\		'*': {},
\		'markdown': {
\			'parentheses_options': 'containedin=markdownCode contained',
\		},
\		'lisp': {
\			'guifgs': ['royalblue3', 'darkorange3', 'seagreen3', 'firebrick', 'darkorchid3'], 
\		},
\		'haskell': {
\			'parentheses': ['start=/(/ end=/)/ fold', 'start=/\[/ end=/\]/ fold', 'start=/\v\{\ze[^-]/ end=/}/ fold'], 
\		},
\		'vim': {
\			'parentheses_options': 'containedin=vimFuncBody', 
\		},
\		'perl': {
\			'syn_name_prefix': 'perlBlockFoldRainbow', 
\		},
\		'stylus': {
\			'parentheses': ['start=/{/ end=/}/ fold contains=@colorableGroup'],
\		},
\		'css': 0,
\	}
\        }
let g:rainbow_active = 1
let g:rbpt_max = 16
let g:rbpt_loadcmd_toggle = 0



 
"if has("gui_running")
"    set background=light
"else
"    set background=dark
"endif
"let g:solarized_termcolors=256
"let g:solarized_termtrans=1
"let g:solarized_contrast="normal"
"let g:solarized_visibility="high"
"let g:solarized_underline=1
"let g:solarized_italic=0
"let g:solarized_degrade=0
"let g:solarized_visibility = "high"
"let g:solarized_bold=1
"let g:solarized_diffmode="normal"
"let g:solarized_hitrail=0
"let g:solarized_menu=1
"

let g:EasyMotion_do_mapping = 0                                                             
let g:EasyMotion_smartcase  = 1  " Turn on case-insensitive feature




let g:cpp_class_scope_highlight = 1
let g:cpp_class_decl_highlight = 1
let g:cpp_experimental_simple_template_highlight = 1
let g:cpp_experimental_template_highlight = 1
let g:cpp_concepts_highlight = 1

nmap <F2> :MRU<cr>

let g:indentLine_char='┆'
let g:indentLine_enabled = 1
let g:indentLine_color_gui = '#A4E57E'


let g:NERDCompactSexyComs        = 1
let g:NERDDefaultAlign           = 'left' 
let g:NERDAltDelims_java         = 1
let g:NERDCustomDelimiters       = {'c': {'left': '/*', 'right': '*/'}}
let g:NERDCommentEmptyLines      = 1
let g:NERDTrimTrailingWhitespace = 1
let g:NERDToggleCheckAllLines    = 1


vmap " S"
vmap ' S'
vmap ` S`
vmap [ S[
vmap ( S(
vmap { S{
vmap } S}
vmap ] S]
vmap ) S)
vmap < S<




call plug#begin('~/.vim/plugged')
Plug 'mhinz/vim-startify'
Plug 'junegunn/fzf.vim'
Plug 'junegunn/fzf', { 'dir': '~/.fzf', 'do': './install --all' }
Plug 'mbbill/undotree/'
Plug 'jaxbot/semantic-highlight.vim'
Plug 'tweekmonster/braceless.vim'
Plug 'dart-lang/dart-vim-plugin'
Plug 'jceb/vim-orgmode', {'for': ['vim-plug', 'org']}
Plug 'ryanoasis/vim-devicons'
Plug 'kevinhwang91/rnvimr', {'do': 'make sync'}
Plug 'machakann/vim-highlightedyank'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
Plug 'vim-scripts/mru.vim'
Plug 'ajmwagar/vim-deus'
Plug 'chrisbra/Colorizer'
Plug 'jaxbot/semantic-highlight.vim'
Plug 'scrooloose/nerdcommenter'
"Plug 'vim-scripts/taglist.vim'
Plug 'vim-airline/vim-airline'
Plug 'godlygeek/tabular'
Plug 'majutsushi/tagbar'
Plug 'nathanaelkane/vim-indent-guides'
Plug 'luochen1990/rainbow'
"Plug 'altercation/vim-colors-solarized'
"Plug 'jacoborus/tender.vim'
Plug 'octol/vim-cpp-enhanced-highlight'
Plug 'Yggdroot/indentLine'
"Plug 'Align'
Plug 'tpope/vim-surround'
Plug 'jiangmiao/auto-pairs'
Plug 'puremourning/vimspector'


call plug#end()

set termguicolors
let $NVIM_TUI_ENABLE_TRUE_COLOR=1
set background=dark
colors deus
hi NonText ctermfg=gray guifg=grey10
"coc--------------------------------------
let g:coc_global_extensions = [
    \ 'coc-html',
	\ 'coc-json',
	\ 'coc-lists',
	\ 'coc-css',
	\ 'coc-vimlsp',
    \ 'coc-translator',
	\ 'coc-syntax',
	\ 'coc-explorer',
	\ 'coc-marketplace',
    \ 'coc-tsserver']
inoremap <silent><expr> <TAB>
      \ pumvisible() ? "\<C-n>" :
      \ <SID>check_back_space() ? "\<TAB>" :
      \ coc#refresh()
inoremap <expr><S-TAB> pumvisible() ? "\<C-p>" : "\<C-h>"

function! s:check_back_space() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~# '\s'
endfunction

inoremap <silent><expr> <c-o> coc#refresh()
nmap <silent> <LEADER>- <Plug>(coc-diagnostic-prev)
nmap <silent> <LEADER>= <Plug>(coc-diagnostic-next)
nmap <silent> gd <Plug>(coc-definition)
nmap <silent> gy <Plug>(coc-type-definition)
nmap <silent> gi <Plug>(coc-implementation)
nmap <silent> gr <Plug>(coc-references)
nnoremap <silent> <LEADER>h :call <SID>show_documentation()<CR>
function! s:show_documentation()
  if (index(['vim','help'], &filetype) >= 0)
    execute 'h '.expand('<cword>')
  else
    call CocAction('doHover')
  endif
endfunction
autocmd CursorHold * silent call CocActionAsync('highlight')
nnoremap <silent> ,y  :<C-u>CocList -A --normal yank<cr>
nmap ts <Plug>(coc-translator-p)
nmap <F3> :CocCommand explorer<CR>
"----------------------------------

noremap <C-p> :FZF<CR>
noremap <C-f> :Ag<CR>
command! -bang -nargs=* Ag
  \ call fzf#vim#ag(<q-args>,
  \                 <bang>0 ? fzf#vim#with_preview('up:60%')
  \                         : fzf#vim#with_preview('right:50%:hidden', '?'),
  \                 <bang>0)



let g:undotree_DiffAutoOpen = 0
map L :UndotreeToggle<CR>



"let g:go_def_mapping_enabled = 0
"let g:go_template_autocreate = 0
"let g:go_textobj_enabled = 0
"let g:go_auto_type_info = 1
"let g:go_def_mapping_enabled = 0
"let g:go_highlight_array_whitespace_error = 1
"let g:go_highlight_build_constraints = 1
"let g:go_highlight_chan_whitespace_error = 1
"let g:go_highlight_extra_types = 1
"let g:go_highlight_fields = 1
"let g:go_highlight_format_strings = 1
"let g:go_highlight_function_calls = 1
"let g:go_highlight_function_parameters = 1
"let g:go_highlight_functions = 1
"let g:go_highlight_generate_tags = 1
"let g:go_highlight_methods = 1
"let g:go_highlight_operators = 1
"let g:go_highlight_space_tab_error = 1
"let g:go_highlight_string_spellcheck = 1
"let g:go_highlight_structs = 1
"let g:go_highlight_trailing_whitespace_error = 1
"let g:go_highlight_types = 1
"let g:go_highlight_variable_assignments = 0
"let g:go_highlight_variable_declarations = 0
"

"if (has("termguicolors"))
" set termguicolors
"endif
"let $NVIM_TUI_ENABLE_TRUE_COLOR=1
"syntax enable
"let g:lightline = { 'colorscheme': 'tender' }

let g:colorizer_syntax = 1
